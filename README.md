Introduction:
This task is about designing and programming circuit that can move the robotic arm, and that is done by placing servo motors in the joints of the arm, and these servo motors are controlled by an Arduino. This task contains two parts, the first one is about designing a circuit that use servo motors to move the arm and program it to move for 90 degrees, and the other part is by making the servo motors rotate depending on Rheostat. 

Part one:
In this part, the aim is to design a circuit that use servo motors to move the arm and program it to move for 90 degrees, the photo name task1-1 shows how to connect the circuit, and it is explained in the following steps:
1-	Connect the 5-v and ground ports of the Arduino to the positive and negative nods respectively in the breadboard.
2-	For each servo motor, connect the red wire to the + nod of the breadboard, and connect the black wire to the - nod of the breadboard.
3-	For each servo motor, connect the middle wire (the one that receive the signal) to one of the digital nods (2 – 7 nods in the top right)

Now, in order to control the circuit, the C code named task1-1 is used for that, firstly, in the first line we include the library Servo.h, then, we define 5 servo motors using the command Servo, then in the main program using attach command, we attached every servo motor with one of the digital ports, and using write command, every servo will turn to 90 degree, and wait 1 second using delay(1000), and then turn back to 0 degree. In the last line I included a loop that is empty because Arduino C codes must contain a loop.


Part two:
In this part the aim is to make the servo motors rotate depending on Rheostat which means when we adjust the resistance of the rheostat, the angel of servo motor will be adjusted, and the rheostat can be controlled using another circuit. Photo named task 1-2 shows the connection in Tinkercad, which is explained in the following:
1-	Connect the 5-v and ground ports of the Arduino to the positive and negative nods respectively in the breadboard.
2-	For each servo motor, connect the red wire to the + nod of the breadboard, and connect the black wire to the - nod of the breadboard.
3-	For each servo motor, connect the middle wire (the one that receive the signal) to one of the digital ports (2 – 7 nods in the top right).
4-	Using 5 rheostats, connect the middle wire of every one to one of the analog ports (A0 – A5 ports in the low right).
5-	For each rheostat, connect one node to the positive node of the breadboard and the other one to the negative.


Now, in order to control the circuit, the C code named task1-2 is used for that, firstly, in the first line we include the library Servo.h, then, using the command int we define 5 variable which represents the reading that is taken from Rheostat. After that, we define 5 servo motors using the command Servo, then, in the setup using attach command, we attached every servo motor with one of the digital ports, then inside a forever loop, we make every variable takes the reading of the rheostat through one of the analog ports using the command analogRead, and for each variable we use the command map to transfer the reading for resistance to degrees, and then using command write we display these variables into the servo motors. So then the motors degree can be controlled using the rheostat.

