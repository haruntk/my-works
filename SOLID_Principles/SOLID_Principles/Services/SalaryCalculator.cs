using SOLID_Principles.Entities;
using SOLID_Principles.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SOLID_Principles.Services
{
    class SalaryCalculator
    {
        public double CalculateSalary(Worker worker) // OCP -> (This function can be used for any object that inherits from the Worker object.)
        {
            return worker.GetWorkingTime() * worker.GetHourlyWage();
        }
    }
}
