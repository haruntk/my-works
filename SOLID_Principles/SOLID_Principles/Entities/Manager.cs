using SOLID_Principles.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SOLID_Principles.Entities
{
    class Manager : Worker, ISuperVisor // Instead of adding SuperVise function in Worker class
                                        // , I added ISuperVisor interface and Manager derived from this. (ISP)
    {
        private double workingTime = 0;
        private const double hourlyWage = 12;
        public override void Break()
        {
            Console.WriteLine("Manager took a break...");
        }
        public override double GetHourlyWage()
        {
            return hourlyWage;
        }

        public void SuperVise()
        {
            Console.WriteLine("Manager is supervising...");
        }

        public override void Work(int m)
        {
            Console.WriteLine("Manager is working for {0} minutes...", m);
            workingTime += (double)m / 60; 
        }

        public override double GetWorkingTime()
        {
            return workingTime;
        }
    }
}
