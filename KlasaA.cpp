#include "KlasaA.h"

KlasaA::KlasaA()
{
	std::puts("KlasaA constructor");
	auto p = new KlasaBazowa<KlasaA>("Hejooo");
}

static KlasaA instance_;