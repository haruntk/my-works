using SOLID_Principles.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SOLID_Principles.Entities
{
    class Chef : Worker,ICooker
    {
        private double workingTime;
        private const double hourlyWage = 14;
        public override void Break()
        {
            Console.WriteLine("Chef took a break..");
        }

        public override double GetHourlyWage()
        {
            return hourlyWage;
        }

        public override double GetWorkingTime()
        {
            return workingTime;
        }

        public override void Work(int minutes)
        {
            Console.WriteLine("Chef is working for {0} minutes...", minutes);
            workingTime += (double)minutes / 60;
        }

        public void Cook()
        {
            Console.WriteLine("Chef is cooking the food..");
        }
    }
}
