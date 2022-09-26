#include "KlasaA.h"

KlasaA::KlasaA()
{
	std::puts("KlasaA constructor");
	KlasaPochodna* p = new KlasaPochodna("Hejooo");
}

static KlasaA instance_;