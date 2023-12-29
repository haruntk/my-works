using SOLID_Principles.Interfaces;
using SOLID_Principles.Services;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SOLID_Principles.Entities
{
    class Employee : Worker // If I added the SuperVise function to Worker class Employee would have to SuperVise (LSP)
    {
        private double workingTime = 0;
        private const double hourlyWage = 8;
        public override void Break()
        {
            Console.WriteLine("Employee took a break...");
        }

        public override void Work(int m)
        {
            Console.WriteLine("Employee is working for {0} minutes...", m);
            workingTime += (double)m / 60;
        }

        public override double GetHourlyWage()
        {
            return hourlyWage;
        }

        public override double GetWorkingTime()
        {
            return workingTime;
        }
    }
}
