#include <boost/pool/pool.hpp>

template <typename T>
class KlasaBazowa
{
public:
	KlasaBazowa(void) {}
	virtual ~KlasaBazowa(void) {}

	void* operator new(size_t size)
	{
		std::puts("KlasaBazowa before malloc");
		std::printf("size: %lu, next_size: %lu\n", m_pool.get_requested_size(), m_pool.get_next_size());
		return (void*)(m_pool.malloc());
	}

    static size_t getSize()
    {
        return m_pool.get_requested_size();
    }

private:
	static boost::pool<>	m_pool;
};

template <typename T>
boost::pool<>	KlasaBazowa<T>::m_pool(sizeof(T), 32);