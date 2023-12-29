using SOLID_Principles.Entities;
using SOLID_Principles.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SOLID_Principles.Services
{
    class FoodService
    {
        private readonly ICooker _cooker;
        private readonly IFoodRunner _foodRunner;
        public FoodService(ICooker cooker, IFoodRunner foodRunner) // Food service doesn't know about low level modules. It's not depend on
                                                                   // low level modules. (DIP)
        {
            this._cooker = cooker;
            this._foodRunner = foodRunner;
        }
        public void TakeFood()
        {
            _foodRunner.TakeFood();
        }
        public void CookFood()
        {
            this._cooker.Cook();
        }
    }
}
