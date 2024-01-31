using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Design_Patterns
{
    class FordEngine : IEngine
    {
        public void Start()
        {
            Console.WriteLine("Ford Engine is working");
        }

        public void Stop()
        {
            Console.WriteLine("Ford Engine stopped");
        }
    }
}
