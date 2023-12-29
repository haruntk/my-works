using SOLID_Principles.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SOLID_Principles.Entities
{
    class Waiter : Worker, IFoodRunner
    {
        private double workingTime;
        private const double hourlyWage = 8.3;
        public override void Break()
        {
            Console.WriteLine("Worker took a break..");
        }

        public override double GetHourlyWage()
        {
            return hourlyWage;
        }

        public override double GetWorkingTime()
        {
            return workingTime;
        }

        public void TakeFood()
        {
            Console.WriteLine("Waiter took the food...");
        }

        public override void Work(int m)
        {
            Console.WriteLine("Waiter is working for {0} minutes...", m);
            workingTime += (double)m / 60;
        }
    }
}
