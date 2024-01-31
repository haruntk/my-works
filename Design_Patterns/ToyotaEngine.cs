using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Design_Patterns
{
    class ToyotaEngine : IEngine
    {
        public void Start()
        {
            Console.WriteLine("Toyota Engine is working");
        }

        public void Stop()
        {
            Console.WriteLine("Toyota Engine stopped");
        }
    }
}
