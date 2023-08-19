using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor rfMotor;
extern motor lfMotor;
extern motor lmMotor;
extern motor lbMotor;
extern motor rmMotor;
extern motor rbMotor;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );