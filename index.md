# Sound Reactive Paper Lanterns
(315) Sound Reactive Paper Lanterns: Replace this text with a brief description (2-3 sentences) of your project. This description should draw the reader in and make them interested in what you've built. You can include what the biggest challenges, takeaways, and triumphs from completing the project were. As you complete your portfolio, remember your audience is less familiar than you are with all that your project entails!

| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Yuktha A | Dougherty Valley High School | Civil Engineering | Incoming Senior

<img src="headshot.png" alt="photo of yuktha" width="400" height="500">
  
<!---This is an HTML comment in Markdown -->
<!--- Anything between these symbols will not render on the published site -->


# Final Milestone

**Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.**

<iframe width="560" height="315" src="https://www.youtube.com/embed/F7M7imOVGug" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For your final milestone, explain the outcome of your project. Key details to include are:
- What you've accomplished since your previous milestone
- What your biggest challenges and triumphs were at BSE
- A summary of key topics you learned about
- What you hope to learn in the future after everything you've learned at BSE



# Second Milestone

**Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.**

<iframe width="560" height="315" src="https://www.youtube.com/embed/uiyLtA5mo70?si=u4MuuchZxNU_SF7s" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

For your second milestone, explain what you've worked on since your previous milestone. You can highlight:
Milestone 2: Building and Wiring the Lanterns 

In this milestone, I assembled and wired the five paper lanterns to make them light up. This milestone was very mechanical and electrical-focused. Each lantern contains a NeoPixel Ring and is connected in a daisy chain configuration. All the nodes/wires are connected to the next in a line or chain in a sequence. 

PICTURE OF FINAL SETUP

To start, I assembled the single power rail for all five lanterns. To begin, I found the striped wire in the ribbon cable to use as the power wire (+5V). I separated the fourth wire from the cable since I only needed three wires (power, ground, and data). The middle wire was the data wire, with the third outer wire being the ground. (See figure below). I needed to connect the power rail to the JST connector so the lanterns have a power source. I attached the red/USB wire from the JST connector to the striped power wire on the power rail, which will carry the +5V power. Then, I connected the middle/data wire to the middle wire on the power rail. The data wire connects to the middle wire, transmitting data signals from the Feather to control the LEDs in each lantern. Finally, I attached the ground wire (G) to the edge wire on the power rail, which will complete the circuit. 

After ensuring the power rail had a power source using a multimeter, I arranged my lanterns. Stretching the power rail out, I roughly arranged my lanterns below it. I created a random layout for a more aesthetic appeal. To mark the lanterns’ position, I pulled three wires on the power rail apart by about an inch.

### CONNECTING THE LANTERNS:

Since the lantern ring had a “data in” and “data out” wire, I cut the power rail’s middle data wire, making the side that was closer to power the “data IN” and the further side to be the “data OUT”. Exposing the power and ground wires made my connection process a lot easier. To connect the power and ground wires, I twisted the striped wire from the lantern ring around the exposed section of the striped power wire on the power rail. For the data wires, I twisted the “data IN” wires and the “data OUT” wires to their corresponding wires on the power rail. I went ahead and soldered all the points together. I did the same process with all five lanterns. To ensure that  there was power in all the lanterns, I double-checked all the connections with a multimeter.
Below is the wiring diagram of the lanterns:


<img src="splitdatawire.png" alt="data wire split" width="500" height="250">
<img src="wiringdiagram.png" alt="data wire split" width="500" height="250">

### CHALLENGES:
When I first attached all the lanterns on the power rail and plugged everything in, only one light was lighting up. I thought it was an electrical issue, so I wrapped electrical tape on every single solder point to make sure there was nothing was incorrectly connected. I checked for continuity multiple times as well. The remaining four lanterns still haven’t lit up though, so I did some research on the WLED website. After countless amount of times not being able to get the lights to light up, I tried looking at the configuration settings on the WLED website. The length was set to lighting only 12 pixels instead of all 60 throughout all five rings. After I changed the setting, the lights all lit up successfully. 

My next milestone is about making the lanterns sound reactive! I am excited to see the end product.






# First Milestone


<iframe width="560" height="315" src="https://www.youtube.com/embed/rk84H7lvbns?si=rWQlfoO3zJcTjpi2" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe> 

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

### Feather ESP V2 Schematic:

<img src="featherschematic.png" alt="data wire split" width="500" height="300">


To begin, I cut the female JST connector and screwed it into the Female DC power adapter, which had a 2.1mm DC jack on one end and a screw terminal block on the other. The red wire is screwed into positive, representing the power. On the other hand, the black wire is screwed into the negative part of the screw terminal, representing ground. This red-to-power and black-to-ground is the standard convention.

Next, I soldered the data wire, the middle wire on my 3-pin JST connector, onto pin 12 on my Feather. To feed power into the Feather and my lights, I then soldered my leftmost red wire with the female and male JST connector that was already connected to the Feather. I did the same thing with my rightmost black wires with the corresponding black wires on the JST connector. It was important to stay consistent with which wire I was using. To avoid confusion, I used electrical tape and color-coded all my wires. 

<img src="jstconnectorlabeled.png" alt="data wire split" width="550" height="500">
<img src="overviewjst.png" alt="data wire split" width="300" height="300">

### STAND WIRING:

Next, I moved on to creating my lights. I used 5 NeoPixel Ring - 5050 RGB LED with Integrated Drivers. To hang the lights up, I used a 4-wire 26awg Silicone-Coated Ribbon Cable. I used different lengths of cable for each Neo Ring to make each lantern hang at a different length in the future. To attach the cable to the ring, I soldered each to a piece of ribbon cable. Each ring had a particular order that had to be soldered on. 
Striped wire: 5V(Power)  2nd wire: data OUT 3rd wire: data IN 4th wire: Ground. 

<img src="standwiring.png" alt="data wire split" width="300" height="250">

### CHALLENGES:
When I first started my project, I wasn’t able to download the software on the Feather. After using a different device, got the software onto the feather. The software only works on a network less than 5G, so I had trouble connecting all the devices. I overcame this issue by connecting to a peer’s hotspot and using their downloaded software on a non-apple product to connect. 

Another challenge I faced was connecting the wires. I had difficulty in twisting, soldering, and heat-shrinking multiple wires together. I overcame this issue by stripping more wire and adding a bigger size of heat shrink on the set of wires. 

### NEXT STEPS:

The next milestone includes of assembling all the lanterns and attaching them to a power rail. I am excited to see how I progress through this project. 

# Schematics 
Here's where you'll put images of your schematics. [Tinkercad](https://www.tinkercad.com/blog/official-guide-to-tinkercad-circuits) and [Fritzing](https://fritzing.org/learning/) are both great resources for creating professional schematic diagrams, though BSE recommends Tinkercad because it can be done easily and for free in the browser. 



# Bill of Materials
Here's where you'll list the parts in your project. To add more rows, just copy and paste the example rows below.
Don't forget to place the link of where to buy each component inside the quotation marks in the corresponding row after href =. Follow the guide [here]([url](https://www.markdownguide.org/extended-syntax/)) to learn how to customize this to your project needs. 

| **Part** | **Note** | **Price** | **Link** |
|:--:|:--:|:--:|:--:|
| Adafruit ESP32 Feather V2 - 8MB Flash + 2 MB PSRAM | What the item is used for | $19.95 | <a href="https://www.adafruit.com/product/5400"> Link </a> |
| NeoPixel Ring - 5 x 5050 RGB LED with Integrated Drivers | What the item is used for | $7.50 | <a href="https://www.adafruit.com/product/1643"> Link </a> |
| Paper Lanterns| What the item is used for | $Price | <a href="https://www.amazon.com/dp/B0757KS4L8?_encoding=UTF8&psc=1&ref_=cm_sw_r_cp_ud_dp_JMMSSZR94M6K803XZNP4"> Link </a> |

# Other Resources/Examples
One of the best parts about Github is that you can view how other people set up their own work. Here are some past BSE portfolios that are awesome examples. You can view how they set up their portfolio, and you can view their index.md files to understand how they implemented different portfolio components.
- [Example 1](https://trashytuber.github.io/YimingJiaBlueStamp/)
- [Example 2](https://sviatil0.github.io/Sviatoslav_BSE/)
- [Example 3](https://arneshkumar.github.io/arneshbluestamp/)


# STARTER PROJECT:


As a starter project, I chose to build the Retro Arcade Game Console. I chose this project because I love gaming in my free time. The games included in the kit are Tetris, snakes, race cars, space invaders, and slot machines. There are several components in this console, and they’re listed in the section: Components Used. A vital piece is the microcontroller as it drives the other functions. The main concept of this project is the microcontroller can detect when a key is pressed and decide accordingly.

The games are displayed on the LED (Light Emitting Diode) DOT MATRIX module. Data is sent to the module through control signals from the microcontroller, defining which LEDs should be on or off. More details in the section below.

Below is a picture of the labeled features on the starter project:
![Headstone Image](buttonfunctions.png)


### Schematic Diagram:
![Headstone Image](overallschematic.png)

Components Used:
12mm Buzzer
Electric Capacitator
Self-switch
IC (Integrated Circuit) Chip 
Digitron Display/ 7-segment display: The score is displayed on a 7-segment display that works by illuminating specific segments out of seven to form numbers or characters.

LED dot matrix module: An LED dot matrix module creates patterns or characters by rapidly scanning rows or columns of LEDs and controlling which are lit through multiplexing and control circuitry.  

### Button Schematic Diagram:

<img src="button.png" alt="button schematic" width="700" height="300">

In this console, a button works by closing an electrical circuit and sending a signal to the microcontroller. The microcontroller will detect the signal, process it through its preset instructions, and then trigger the corresponding action in the game. Once triggered, the microcontroller will update the LED dot matrix module to make the following changes. The microcontroller controls the rows and columns of the LED matrix using multiplexing, ensuring that the right visual display is on the module.
-->
### Challenges:

Despite the project seeming smooth, there were quite a lot of difficulties I faced along the way. As I was attaching the outer acrylic frame, the side piece cracked, blocking my way of connecting the USB port to power the console. Another challenge I faced was regarding the buzzer. My 12 mm buzzer was originally soldered in the wrong direction. When trying to desolder it, the wires snapped and got stuck in the PCB. After an hour of trying different methods to remove the wire, I ended up having to start over my entire project. A lesson I learned is that sometimes you have to restart, but you will be more efficient and effective the second time around. I’m excited to start my main project: Sound Reactive Paper Lanterns. 



To watch the BSE tutorial on how to create a portfolio, click here.
