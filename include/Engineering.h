namespace calc
{
    class Ohmslaw{
    public:
        //calculate voltage
        static double voltage(double current, double resistance){
            return current*resistance;
        }
        //calculate current
        static double current(double voltage, double resistance){
            return voltage/resistance;
        }
        //calculate resistance
        static double resistance(double voltage, double current){
            return voltage/current;
        }
    };
}