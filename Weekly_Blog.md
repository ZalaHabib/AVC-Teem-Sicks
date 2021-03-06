# Weekly Blog

#Week 1:
* Zala Habib:
    In Week 1 we came together as a group for the first time on Thursday, 
    most of us meeting for the first time. We assigned ourselves general 
    roles and figuring out what we would be doing for the coming weeks. 
    Tim and Cam started on some basic code, getting the gate control and
    straight line movement code done but not tested. Ian got most of the
    chassis done while Jimmy and I set up contacts, meetings and our AVC
    plan, including our goals for the coming weeks.


* Tim Foley:
    This week Cameron and I wrote 3 methods. The first method created was the gate control which connected to the gate and submitted the password in order to open the gate. The second method we created detected white pixels on a black background and outputted a number representative of where the white tape was. We based our code off of the code supplied in lectures. We also created a method to test the motors of our AV. In accordance with our goal for the week (to get our AV to move in a straight line) this method would turn on the motors for a few seconds and then turn them off. Unfortunately our AV was not built to the point that we could compile and test these methods so we uploaded them to git hub un-compiled. 


#Week 2:
* Ian Broadhurst:
    This week, most of the progress on the AVC was halted due to the 
    Mid-Trimester break. In order to make sure that the progress wasn’t 
    entirely halted, I came in on the day that break ended  in order to 
    work on the chassis. I managed to build the first prototype chassis, 
    which was built to make just some basic movements. I didn’t get the 
    motors set up due to time constraints, and I have realised that the 
    motors weren’t in a state that they would be able to work anyway, due 
    to them missing a couple of wires.

#Week 3:
* Tim Foley:
    This week our AV was built up to the point that it was ready to be tested. We spent about half of our lab compiling and testing our code and the other half debugging and fixing our code. We were able to compile and initiate our gate control method which resulted in our first success. After a lot of confusion we managed to get our white tape detection method to compile and run successfully. We ran a few tests on this method until we were satisfied that the output was accurate and running without error. We attempted to compile and run our straight line code that we had written earlier. After a few tests and some modifications to the code we ran out of time and were not able to complete this method.

#Week 4:
*James Barrett:
    This week we really started to come together as a team and get some physical results. The original horizontal design of the PI robot was scrapped as we decided this long layout would Inhibit the robot's ability to navigate the enclosed environment of the maze. We struggled to get the code for the linear movement of the robot to drive the motors, but found that the issue lied in the attachment of the wires to the motor not the code. In response to this issue, Ian resoldered the wires to the motor. A lot of work was done implementing the github code onto the PI robot, and working with Arthur to help debug the code for moving the av along the line.

#Week 5:
* Tim Foley:
    This week we did not get much lab time as a result of overcrowding in the lab. The majority of the week was spent testing and attempting to fix the numerous bugs and problems we were experiencing. We made several adjustments to the code as we found our PI ignoring the track or turning to the right for no reason. Even after a lot of testing we could not find a resolution to the turning problem. Even in a straight line test we observed the AV swerve to the right. We managed to limit the right turn bias by adjusting the individual wheel speeds, but even this was not an ideal solution.

#Week 6:
* Cameron Hopkinson: 
    We discovered that if you're using an integer in the process of declaring a double, the result will be rounded down which meant that the error signal was having no influence on the movement of the robot. After the code was fixed by making the error signal a double and we sorted out some mild confusion in regards to which wheel was which, it worked perfectly. We're still to properly implement PID but at this stage, it's handling the corners so smoothly that it might not even be necessary.

#Week 7:
* Tim Foley:
    This week we discovered the origin of our turning woes. Throughout the entirety of this challenge we have been experiencing issues with our turning system. Our robot would turn right even when all code telling it to turn right was commented out. Somehow we managed to navigate the first 2 quadrants successfully even with this major issue, but it was a significant obstacle when it came to approaching the 3rd quadrant. Today (2 days before the assessment) we realised that our camera was on backwards. the day before the assesment we managed to debug jimmy's Q4 code so that it was functional enough to make it to the 80% mark. however on the day of assessment issues (such as unstable PID) with our AV emerged out of the blue and started causing problems. Despite these issues we managed to get 75% in the maze, losing 3 points for build quality, giving us a score of 72%.
