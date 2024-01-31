using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Design_Patterns
{
    class MitsubishiEngine : IEngine
    {
        public void Start()
        {
            Console.WriteLine("Mitsubishi Engine is working");
        }

        public void Stop()
        {
            Console.WriteLine("Mitsubishi Engine stopped");
        }
    }
}
