#include "Car.hpp"
#include "Chargeable.hpp"
#include "ElectricEngine.hpp"

class ElectricCar: public Car
                ,  public Chargeable
{
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();

    ElectricEngine* engine_;
};

