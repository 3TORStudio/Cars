#include "Car.hpp"
#include "PetrolEngine.hpp"
#include "Refuelable.hpp"

class PetrolCar: public Car
               , public Refuelable 
{
protected:
    PetrolEngine* engine_;
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();

};

