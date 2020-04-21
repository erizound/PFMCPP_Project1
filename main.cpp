#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: keyboard
//  action 1: The keyboard lights up
keyboard.lightUp();
//  action 2: The keyboard makes noise
keyboard.makeNoise();
//  action 3: The keyboard gets warm
keyboard.getWarm();
//  2)
//  Noun: microphone
//  action 1: The microphone captures sound
microphone.capturesSound();
//  action 2: The microphone vibrates
microphone.vibrate();
//  action 3: The microphone converts energy
microphone.convertEnergy(); 
//  3)
//  Noun:car
//  action 1: The car moves
car.move();
//  action 2: The car stops
car.stop();
//  action 3: The car heats up
car.heatUp();
//  4)
//  Noun: dog
//  action 1:The dog runs
dog.run();
//  action 2:The dog sits
dog.sit();
//  action 3:The dog sleeps
dog.sleep();
//  5)
//  Noun:pen
//  action 1:The pen writes
pen.write();
//  action 2:The pen clicks
pen.click();
//  action 3:The pen stains
pen.stain();
//  6)
//  Noun:CPU
//  action 1:The CPU converts
cpu.convert();
//  action 2:The CPU processes
cpu.process();
//  action 3: The CPU manages information
cpu.manageInfo();
//  7)
//  Noun: water
//  action 1: The water boils
water.boil();
//  action 2: The water drips
water.drip();
//  action 3:The water freezes
water.freeze();
//  8)
//  Noun: sinewave
//  action 1: The sinewave changes frequency
sineWave.changeFrequency();
//  action 2:The sinewave changes amplitude
sineWave.changeAmplitude();
//  action 3:The sinewave changes phase
sineWave.changePhase();
//  9)
//  Noun:internet
//  action 1:The internet connects
internet.connect();
//  action 2:The internet changes protocols 
internet.changeProtocol();
//  action 3:disconnects
internet.breaks();
//  10)
//  Noun:console
//  action 1: The console sums signals
console.sumChannels();
//  action 2: The console trims signals
console.trimSignal();
//  action 3: The console splits signals
console.splitSignal();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
