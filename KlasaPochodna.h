#include "KlasaBazowa.h"

class KlasaPochodna : public KlasaBazowa<KlasaPochodna>
{
public:
    KlasaPochodna(std::string str)
    {
        std::puts(str.c_str());
    }
private:
    int jakies;
	double pola;
	bool niewazne;
	bool jakie;
	bool aby;
	unsigned int tylko;
	bool size;
	int jakis;
	int	byl;
};