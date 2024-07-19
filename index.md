# Sound Reactive Paper Lanterns
(315) Sound-Reactive Paper Lanterns: Transform your space with vibrant, sound-reactive paper lanterns controlled by an ESP32 Feather and the WLED software. This project combines Wifi-enabled lighting and LEDfx sound analysis to create a light show responding to music. Look closely to see the aspects of this enticing project!

| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Yuktha A | Dougherty Valley High School | Civil Engineering | Incoming Senior

<img src="headshot.png" alt="photo of yuktha" width="400" height="500">
  
<!---This is an HTML comment in Markdown -->
<!--- Anything between these symbols will not render on the published site -->

# Modifications
----------------------------

After researching possible modifications for my lanterns, I became interested in voice commands. I imagined the lanterns to be similar to planets, so another modification I wanted to create was to add to these starry night stars. So that’s how I created my modification: voice-automated LED stars. 

By using an Arduino UNO, and the DFRobot Voice Module Device, I can turn on, turn off, and change the LEDs to seven different colors. These LED strips are all stuck on these handmade stars which are wired together using an Arduino. 


What I Used:
Arduino UNO: The central microcontroller that manages inputs and outputs. 

DFRobot Voice Module: This module captures voice commands and converts them into signals the Arduino can process. 

LED Strips: These are used to create the starry effect. Each LED can be controlled individually to display different colors. 

Handmade Stars: These stars are crafted to house the LED strips using vellum paper, creating a visually appealing effect. 

Wiring: Necessary to connect the LEDs, voice module, and Arduino. 


Figure: DFROBOT VOICE MODULE
<img src="voice.png" alt="voice" width="400" height="300">

After downloading the Adafruit Neopixel Library as well as the DFRobot Library on the Arduino IDE, I was able to write the appropriate code to program the LED strips.

CODE:
<a href="https://github.com/yukthaayyagari/YukthaAyyagari_BSE_Template_Portfolio/edit/gh-pages/main.cpp">Modification</a>

This code integrates the Adafruit Neopixel Library and the DFRobot Voice Module Library to control LED strips via voice commands using an Arduino. It initializes the LED strips and voice module, listens for specific voice commands, and executes corresponding LED patterns such as turning the LEDs on, and off and changing colors. The code includes several functions to create various LED effects, like color wipes and rainbow fades.


Challenges: 

In my modification process, I had a lot of trouble splitting the power and making sure each component had enough power. The LEDs needed 5V batteries, so I wasn’t able to power it with my 9V battery. I also had to troubleshoot the code many times through my Arduino UNO. My code wouldn’t flash properly, but after reflashing, disconnecting, and reconnecting, it was able to light up again. A day before demo night, my LEDs had connection issues, causing my Arduino to stop working, but after replacing the Arduino and the wires, I was able to slowly start getting the stars to turn on.

What’s next? 

If I had infinite time, I would like to connect my lanterns and stars to a home assistant. This integration would make the lanterns much easier to control and enhance their functionality.

Lessons Learned:
I learned many engineering concepts that I wouldn’t have learned in my regular school curriculum. I worked with a lot of electrical engineering concepts like how to Solder, Dremel, and work with wire connections. One of the most significant lessons I learned was the importance of troubleshooting. Facing and solving various challenges taught me the value of persistence and patience. I learned to systematically solve problems, test solutions, and stay resilient despite several setbacks. This experience improved my technical skills and fostered a mindset of perseverance and continuous improvement.



# Final Milestone
----------------------------

<iframe width="560" height="315" src="https://www.youtube.com/embed/RpSbDc5aFOY?si=y1K0bTOWYw7Uj53M" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

<img src="flowchart.png" alt="photo of yuktha" width="400" height="500">
Figure 1: Flow Chart of Entire Project

--
The third milestone was all about making the lanterns reactive to sound. Apart from WLED software, I used the LEDfx software to run the lanterns. LEDfx software is a program on a computer that analyzes and captures sound and provides real-time audio effects. The difference between LEDfx and WLED is that LEDFx specializes in sound-reactive lighting effects, while WLED is used to enable WiFi-controlled LED strips with home automation integration.

This downloading process took me a long time as several steps existed before installing LEDfx. I needed to have Python 3.9, and dependencies such as Homebrew and pip installed as well. Pip Install is a virtual environment and a command to install packages from package repositories. Packages are software applications that are made up of many files in a grouped format. I ran these applications using command lines on the Terminal. Once I was able to open the app, I connected the appropriate WLED device and changed the audio settings. 

I named my device “Spheres” and was able to customize the effects as it was easier to identify my device. LEDfx app allowed me to explore the different settings and effect types that the lanterns can change into. There were multiple presets and effect configurations as well. I also downloaded the WLED app on my phone to connect to make the user configurations easier.

<img src="spheres1.png" alt="photo of yuktha" width="600" height="500">
<img src="effectconfig.png" alt="photo of yuktha" width="400" height="500">

Figure 2 & 3: LEDFX website
### Challenges:

Despite being the shortest milestone, I encountered the most difficulty during its completion. I struggled with troubleshooting simple software issues, which made installing these applications significantly harder, taking me around two days to install the LEDfx software itself. I overcame these challenges by researching online and meticulously following installation instructions. Another issue I faced was that my lights weren’t properly reacting to sound using the software. After deleting the entire application and restarting my computer multiple times, I successfully resolved this issue, and my lights began working perfectly.

So far, in this project, I learned many key engineering topics. I was exposed to the electrical aspect, mechanical, and software as well. There were several times when I didn’t know the topic and the concept behind what I was doing. Through a lot of research, I learned that I have to explore around and try everything to see what I like. I have about 3 weeks left here at BSE, so I hope to add my modifications to this project. With the time I have, I want to attempt to make my project more personal to me.



# Second Milestone

<iframe width="560" height="315" src="https://www.youtube.com/embed/uiyLtA5mo70?si=u4MuuchZxNU_SF7s" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

--------------------------------------------------------

Milestone 2: Building and Wiring the Lanterns 

In this milestone, I assembled and wired the five paper lanterns to make them light up. This milestone was very mechanical and electrical-focused. Each lantern contains a NeoPixel Ring and is connected in a daisy chain configuration. All the nodes/wires are connected to the next in a line or chain in a sequence. 


<img src="finaldisplay1.png" alt="finaldisplay" width="800" height="500">
Figure 4: Picture of FINAL DISPLAY

To start, I assembled the single power rail for all five lanterns. To begin, I found the striped wire in the ribbon cable to use as the power wire (+5V). I separated the fourth wire from the cable since I only needed three wires (power, ground, and data). The middle wire was the data wire, with the third outer wire being the ground. (See figure below). I needed to connect the power rail to the JST connector so the lanterns have a power source. I attached the red/USB wire from the JST connector to the striped power wire on the power rail, which will carry the +5V power. Then, I connected the middle/data wire to the middle wire on the power rail. The data wire connects to the middle wire, transmitting data signals from the Feather to control the LEDs in each lantern. Finally, I attached the ground wire (G) to the edge wire on the power rail, which will complete the circuit. 

After ensuring the power rail had a power source using a multimeter, I arranged my lanterns. Stretching the power rail out, I roughly arranged my lanterns below it. I created a random layout for a more aesthetic appeal. To mark the lanterns’ position, I pulled three wires on the power rail apart by about an inch.

### CONNECTING THE LANTERNS:

Since the lantern ring had a “data in” and “data out” wire, I cut the power rail’s middle data wire, making the side that was closer to power the “data IN” and the further side to be the “data OUT”. Exposing the power and ground wires made my connection process a lot easier. To connect the power and ground wires, I twisted the striped wire from the lantern ring around the exposed section of the striped power wire on the power rail. For the data wires, I twisted the “data IN” wires and the “data OUT” wires to their corresponding wires on the power rail. I went ahead and soldered all the points together. I did the same process with all five lanterns. To ensure that  there was power in all the lanterns, I double-checked all the connections with a multimeter.
Below is the wiring diagram of the lanterns:


<img src="splitdatawire.png" alt="data wire split" width="500" height="250">
<img src="wiringdiagram.png" alt="data wire split" width="500" height="250">
Figure 5 and 6: Wiring Diagram
### CHALLENGES:
When I first attached all the lanterns on the power rail and plugged everything in, only one light was lighting up. I thought it was an electrical issue, so I wrapped electrical tape on every single solder point to make sure there was nothing was incorrectly connected. I checked for continuity multiple times as well. The remaining four lanterns still haven’t lit up though, so I did some research on the WLED website. After countless amount of times not being able to get the lights to light up, I tried looking at the configuration settings on the WLED website. The length was set to lighting only 12 pixels instead of all 60 throughout all five rings. After I changed the setting, the lights all lit up successfully. 

My next milestone is about making the lanterns sound reactive! I am excited to see the end product.




# First Milestone

<iframe width="560" height="315" src="https://www.youtube.com/embed/rk84H7lvbns?si=rWQlfoO3zJcTjpi2" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe> 
---------------------------
For my first milestone, I focused on the electrical aspects of my project.

To start, I set up the WLED (white light emitting diode) software on my feather microcontroller. The WLED software is an open-source software, a software that allows for one to inspect, modify, and enhance the source code. Through WLED, I control LEDs with a web server or phone app. I needed to download the software and connect it to the proper 4G wifi connection. On the software, there were different settings that I needed to customize in order to fit the requirements for my lanterns. For example, in the preferences, I had five rings with 12 pixels each, so that would be 60 pixels total.

After starting the setup on the software, I moved on to assembling the electric components
The components I used for this:

Adafruit ESP32 Feather V2 - 8MB Flash + 2 MB PSRAM: 
ESP32 is a chip that provides Wi-Fi and Bluetooth connectivity for embedded devices
PSRAM (Psuedostatic RAM) memory.
JST 2-pin Extension Cable with On/Off Switch - JST PH2 : JST (Japanese Solderless Terminal) are electrical connectors. In this extension cable, one end has a classic female JST-PH2 socket, and the other end has a matching plug.
Female DC Power adapter
5V 2A (2000mA) switching power supply


<img src="featherschematic.png" alt="data wire split" width="500" height="300">
Figure 7: Feather ESP V2 Schematic

To begin, I cut the female JST connector and screwed it into the Female DC power adapter, which had a 2.1mm DC jack on one end and a screw terminal block on the other. The red wire is screwed into positive, representing the power. On the other hand, the black wire is screwed into the negative part of the screw terminal, representing ground. This red-to-power and black-to-ground is the standard convention.

Next, I soldered the data wire, the middle wire on my 3-pin JST connector, onto pin 12 on my Feather. To feed power into the Feather and my lights, I then soldered my leftmost red wire with the female and male JST connector that was already connected to the Feather. I did the same thing with my rightmost black wires with the corresponding black wires on the JST connector. It was important to stay consistent with which wire I was using. To avoid confusion, I used electrical tape and color-coded all my wires. 

<img src="jstconnectorlabeled.png" alt="data wire split" width="550" height="500">
<img src="overviewjst.png" alt="data wire split" width="300" height="300">
Figure 8,9: JST Connect Diagram

### STAND WIRING:

Next, I moved on to creating my lights. I used 5 NeoPixel Ring - 5050 RGB LED with Integrated Drivers. To hang the lights up, I used a 4-wire 26awg Silicone-Coated Ribbon Cable. I used different lengths of cable for each Neo Ring to make each lantern hang at a different length in the future. To attach the cable to the ring, I soldered each to a piece of ribbon cable. Each ring had a particular order that had to be soldered on. 
Striped wire: 5V(Power)  2nd wire: data OUT 3rd wire: data IN 4th wire: Ground. 

<img src="standwiring.png" alt="data wire split" width="300" height="250">
Figure 10: Stand Wiring

### CHALLENGES:
When I first started my project, I wasn’t able to download the software on the Feather. After using a different device, got the software onto the feather. The software only works on a network less than 5G, so I had trouble connecting all the devices. I overcame this issue by connecting to a peer’s hotspot and using their downloaded software on a non-apple product to connect. 

Another challenge I faced was connecting the wires. I had difficulty in twisting, soldering, and heat-shrinking multiple wires together. I overcame this issue by stripping more wire and adding a bigger size of heat shrink on the set of wires. 

### NEXT STEPS:

The next milestone includes of assembling all the lanterns and attaching them to a power rail. I am excited to see how I progress through this project. 

# Schematics 
Here's where you'll put images of your schematics. [Tinkercad](https://www.tinkercad.com/blog/official-guide-to-tinkercad-circuits) and [Fritzing](https://fritzing.org/learning/) are both great resources for creating professional schematic diagrams, though BSE recommends Tinkercad because it can be done easily and for free in the browser. 



# Bill of Materials

| **Part** | **Note** | **Price** | **Link** |
|:--:|:--:|:--:|:--:|
| Adafruit ESP32 Feather V2 - 8MB Flash + 2 MB PSRAM |Microcontroller/ Audio Processing/ Control of LEDs| $19.95 | <a href="https://www.adafruit.com/product/5400"> Link </a> |
| NeoPixel Ring - 5 x 5050 RGB LED with Integrated Drivers | Sound-Reactive Lighting Effects | $7.50 | <a href="https://www.adafruit.com/product/1643"> Link </a> |
| Paper Lanterns| Housing for LEDs/ Decorative Element | $17.99 | <a href="https://www.amazon.com/dp/B0757KS4L8?_encoding=UTF8&psc=1&ref_=cm_sw_r_cp_ud_dp_JMMSSZR94M6K803XZNP4"> Link </a> |
|4-wire 26awg Silicone Coated Ribbon Cable |Power and Signal Transmission | $19.98 | <a href="https://www.amazon.com/dp/B07PMS4WNN?_encoding=UTF8&psc=1&ref_=cm_sw_r_cp_ud_dp_6S4PN0M8W63V88Q4RCYG_1"> Link </a> |
| JST Connector x 1 | Wire Connections| $1.50 | <a href="https://www.adafruit.com/product/1663"> Link </a> |
| Female DC Power Adapter | Voltage and Current Power Connection | $2.00 | <a href="https://www.adafruit.com/product/368"> Link </a> |
| 5v 2A Power Supply| Powering Componenet | $7.95 | <a href="https://www.adafruit.com/product/276"> Link </a> |
| JST 2-pin Extension Cable with On/Off Switch | Power Control| $2.95 | <a href="https://www.adafruit.com/product/3064"> Link </a> |

<!---# Other Resources/Examples
One of the best parts about Github is that you can view how other people set up their own work. Here are some past BSE portfolios that are awesome examples. You can view how they set up their portfolio, and you can view their index.md files to understand how they implemented different portfolio components.
- [Example 1](https://trashytuber.github.io/YimingJiaBlueStamp/)
- [Example 2](https://sviatil0.github.io/Sviatoslav_BSE/)
- [Example 3](https://arneshkumar.github.io/arneshbluestamp/)

-->
# STARTER PROJECT:


As a starter project, I chose to build the Retro Arcade Game Console. I chose this project because I love gaming in my free time. The games included in the kit are Tetris, snakes, race cars, space invaders, and slot machines. There are several components in this console, and they’re listed in the section: Components Used. A vital piece is the microcontroller as it drives the other functions. The main concept of this project is the microcontroller can detect when a key is pressed and decide accordingly.

The games are displayed on the LED (Light Emitting Diode) DOT MATRIX module. Data is sent to the module through control signals from the microcontroller, defining which LEDs should be on or off. More details in the section below.

Below is a picture of the labeled features on the starter project:
![Headstone Image](buttonfunctions.png)

Figure 11: Button Functions

![Headstone Image](overallschematic.png)

Figure 12: Schematic Diagram
Components Used:
12mm Buzzer
Electric Capacitator
Self-switch
IC (Integrated Circuit) Chip 
Digitron Display/ 7-segment display: The score is displayed on a 7-segment display that works by illuminating specific segments out of seven to form numbers or characters.

LED dot matrix module: An LED dot matrix module creates patterns or characters by rapidly scanning rows or columns of LEDs and controlling which are lit through multiplexing and control circuitry.  

### Button Schematic Diagram:

<img src="button.png" alt="button schematic" width="700" height="300">
Figure 13: Button Schematic
In this console, a button works by closing an electrical circuit and sending a signal to the microcontroller. The microcontroller will detect the signal, process it through its preset instructions, and then trigger the corresponding action in the game. Once triggered, the microcontroller will update the LED dot matrix module to make the following changes. The microcontroller controls the rows and columns of the LED matrix using multiplexing, ensuring that the right visual display is on the module.
-->
### Challenges:

Despite the project seeming smooth, there were quite a lot of difficulties I faced along the way. As I was attaching the outer acrylic frame, the side piece cracked, blocking my way of connecting the USB port to power the console. Another challenge I faced was regarding the buzzer. My 12 mm buzzer was originally soldered in the wrong direction. When trying to desolder it, the wires snapped and got stuck in the PCB. After an hour of trying different methods to remove the wire, I ended up having to start over my entire project. A lesson I learned is that sometimes you have to restart, but you will be more efficient and effective the second time around. I’m excited to start my main project: Sound Reactive Paper Lanterns. 



To watch the BSE tutorial on how to create a portfolio, click here.
