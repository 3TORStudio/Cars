#include "Car.hpp"
#include "Chargeable.hpp"
#include "ElectricEngine.hpp"

class ElectricCar: public Car
                 , public Chargeable
{
protected:
    ElectricEngine* engine_;
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();
};

