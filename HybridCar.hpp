#include "Car.hpp"
#include "Chargeable.hpp"
#include "ElectricEngine.hpp"
#include "PetrolEngine.hpp"
#include "Refuelable.hpp"

class HybridCar: public Car
                ,public Refuelable
                ,public Chargeable
{
public:
    HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng);
    ~HybridCar();

    PetrolEngine* petrolEngine_;
    ElectricEngine* electricEngine_;
};

