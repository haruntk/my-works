using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SOLID_Principles.Entities
{
    abstract class Worker
    {
        public abstract void Break();
        public abstract void Work(int minutes);
        public abstract double GetHourlyWage();
        public abstract double GetWorkingTime();
    }
}
