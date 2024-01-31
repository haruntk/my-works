using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Design_Patterns
{
    class Car // There is only 1 car (Singleton)
    {
        private static Car instance;
        private Car() { }
        public static Car getInstance()
        {
            if (instance == null)
                instance = new Car();
            return instance;
        }
        public IEngine engine { get; set; }
    }
}
