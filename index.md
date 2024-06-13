# Project Name Here
(315) Sound Reactive Paper Lanterns: Replace this text with a brief description (2-3 sentences) of your project. This description should draw the reader in and make them interested in what you've built. You can include what the biggest challenges, takeaways, and triumphs from completing the project were. As you complete your portfolio, remember your audience is less familiar than you are with all that your project entails!

You should comment out all portions of your portfolio that you have not completed yet, as well as any instructions:
```HTML 
This is an HTML comment in Markdown -->
<!--- Anything between these symbols will not render on the published site -->
```

 | **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Yuktha A | Dougherty Valley High School | Civil Engineering | Incoming Senior

**Replace the BlueStamp logo below with an image of yourself and your completed project. Follow the guide [here](https://tomcam.github.io/least-github-pages/adding-images-github-pages-site.html) if you need help.**

![Headstone Image](logo.svg)
  
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

<iframe width="560" height="315" src="https://www.youtube.com/embed/y3VAmNlER5Y" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For your second milestone, explain what you've worked on since your previous milestone. You can highlight:
- Technical details of what you've accomplished and how they contribute to the final goal
- What has been surprising about the project so far
- Previous challenges you faced that you overcame
- What needs to be completed before your final milestone 

# First Milestone

**Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.**

<iframe width="560" height="315" src="https://www.youtube.com/embed/CaCazFBhYKs" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For your first milestone, describe what your project is and how you plan to build it. You can include:
- An explanation about the different components of your project and how they will all integrate together
- Technical progress you've made so far
- Challenges you're facing and solving in your future milestones
- What your plan is to complete your project

# Schematics 
Here's where you'll put images of your schematics. [Tinkercad](https://www.tinkercad.com/blog/official-guide-to-tinkercad-circuits) and [Fritzing](https://fritzing.org/learning/) are both great resoruces to create professional schematic diagrams, though BSE recommends Tinkercad becuase it can be done easily and for free in the browser. 

# Code
Here's where you'll put your code. The syntax below places it into a block of code. Follow the guide [here]([url](https://www.markdownguide.org/extended-syntax/)) to learn how to customize it to your project needs. 

```c++
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
```

# Bill of Materials
Here's where you'll list the parts in your project. To add more rows, just copy and paste the example rows below.
Don't forget to place the link of where to buy each component inside the quotation marks in the corresponding row after href =. Follow the guide [here]([url](https://www.markdownguide.org/extended-syntax/)) to learn how to customize this to your project needs. 

| **Part** | **Note** | **Price** | **Link** |
|:--:|:--:|:--:|:--:|
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |

# Other Resources/Examples
One of the best parts about Github is that you can view how other people set up their own work. Here are some past BSE portfolios that are awesome examples. You can view how they set up their portfolio, and you can view their index.md files to understand how they implemented different portfolio components.
- [Example 1](https://trashytuber.github.io/YimingJiaBlueStamp/)
- [Example 2](https://sviatil0.github.io/Sviatoslav_BSE/)
- [Example 3](https://arneshkumar.github.io/arneshbluestamp/)


STARTER PROJECT:
As a starter project, I chose to build the Retro Arcade Game Console. I chose this project because I love gaming in my free time. The games included in the kit are Tetris, snakes, race cars, space invaders, and slot machines. There are several components in this console, and they’re listed in the section: Components Used. A vital piece is the microcontroller as it drives the other functions. The main concept of this project is the microcontroller can detect when a key is pressed and decide accordingly.

The games are displayed on the LED (Light Emitting Diode) DOT MATRIX module. Data is sent to the module through control signals from the microcontroller, defining which LEDs should be on or off. More details in the section below.

Below is a picture of the labeled features on the starter project:
(Screen Shot 2024-06-13 at 11.28.10 AM.png)


Schematic Diagram:


Components Used:
12mm Buzzer
Electric Capacitator
Self-switch
IC (Integrated Circuit) Chip 
Digitron Display/ 7-segment display: The score is displayed on a 7-segment display that works by illuminating specific segments out of seven to form numbers or characters.

LED dot matrix module: An LED dot matrix module creates patterns or characters by rapidly scanning rows or columns of LEDs and controlling which are lit through multiplexing and control circuitry.  

Button Schematic Diagram:



In this console, a button works by closing an electrical circuit and sending a signal to the microcontroller. The microcontroller will detect the signal, process it through its preset instructions, and then trigger the corresponding action in the game. Once triggered, the microcontroller will update the LED dot matrix module to make the following changes. The microcontroller controls the rows and columns of the LED matrix using multiplexing, ensuring that the right visual display is on the module.

Challenges:
Despite the project seeming smooth, there were quite a lot of difficulties I faced along the way. As I was attaching the outer acrylic frame, the side piece cracked, blocking my way of connecting the USB port to power the console. Another challenge I faced was regarding the buzzer. My 12 mm buzzer was originally soldered in the wrong direction. When trying to desolder it, the wires snapped and got stuck in the PCB. After an hour of trying different methods to remove the wire, I ended up having to start over my entire project. A lesson I learned is that sometimes you have to restart, but you will be more efficient and effective the second time around. I’m excited to start my main project: Sound Reactive Paper Lanterns. 



To watch the BSE tutorial on how to create a portfolio, click here.
