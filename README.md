<p align="justify">
<h1><b>Smart-water-management-system</b></h1>
  <h2>Project under ArIES</h2>
</p>

![Overflow](https://github.com/Ch0ubey/smart-water-management/blob/f142c21dddd2aa5894f4ef7d9a8d66e42ad7f41a/circuit%20snaps/tank%20overflow.jpg)
<div align="center"><em>Overflow</em></div>
<br/>

<p align="justify">
  <h2>Abstract</h2>
</p>
<p align="justify">
  
- Due to heavy rains, Nandhivaram, Urappakkam, Mannivakkam and Adanur tanks breached on reaching maximum water level, resulting in heavy inflow into Adyar river.
- In view of heavy inflow in Adyar river, the high intensity runoff of local rainfall in Chennai City and adjoining areas could not fully drain into Adyar and hence contributed to the inundation of the city
- This was our real-life problem, taken from Chennai tank overflow calamity.

</p>

<p align="justify">
  <h2>Objective</h2>
</p>
<p align="justify">
  
  Our objective was to make a more feasible Automated system than using manual labour in detection of the water level of a tank using some ultra-sonic rays. So that no similar incidents occur in future.

</p>

<p align="justify">
  <h2>Electronics Aspect of Design</h2>
</p>
<p align="justify">

The Electronic Design is simulated on tinkercad where we used Arduino UNO as microcontroller, Alarm, LEDs, resistors and breadboard.
> ## Circuit 

<p align="center">
  <img src="https://github.com/Ch0ubey/smart-water-management/blob/f142c21dddd2aa5894f4ef7d9a8d66e42ad7f41a/circuit%20snaps/circuit%20diagram.jpg">
  <br/><i>Circuit</i>
</p>

> ## LED when tank will be 0-20% full
> 
>No LED will blink up in this situation.

<p align="center">
  <img src="https://github.com/Ch0ubey/smart-water-management/blob/f142c21dddd2aa5894f4ef7d9a8d66e42ad7f41a/circuit%20snaps/less%20than%2020%25.jpg">
  <br/><i>0-20%</i>
</p>

> ## LED when tank will be 20-40% full
> 
>Only one LEDs will blink up in this situation.

<p align="center">
  <img src="https://github.com/Ch0ubey/smart-water-management/blob/f142c21dddd2aa5894f4ef7d9a8d66e42ad7f41a/circuit%20snaps/20-40%25.jpg">
  <br/><i>20-40%</i>
</p>

> ## LED when tank will be 40-60% full
> 
>Two LEDs will blink up in this situation.

<p align="center">
  <img src="https://github.com/Ch0ubey/smart-water-management/blob/f142c21dddd2aa5894f4ef7d9a8d66e42ad7f41a/circuit%20snaps/40-60%25.jpg">
  <br/><i>40-60%</i>
</p>


> ## LED when tank will be 60-80% full
> 
>Three LEDs will blink up in this situation.

<p align="center">
  <img src="https://github.com/Ch0ubey/smart-water-management/blob/f142c21dddd2aa5894f4ef7d9a8d66e42ad7f41a/circuit%20snaps/60-80%25.jpg">
  <br/><i>60-80%</i>
</p>

> ## LED when tank will be 80-100% full
> 
>Four LEDs will blink up in this situation.

<p align="center">
  <img src="https://github.com/Ch0ubey/smart-water-management/blob/f142c21dddd2aa5894f4ef7d9a8d66e42ad7f41a/circuit%20snaps/80-100%25.jpg">
  <br/><i>80-100%</i>
</p>

> ## LED when tank starts overflowing
> 
>All LEDs will blink up in this situation.

<p align="center">
  <img src="https://github.com/Ch0ubey/smart-water-management/blob/f142c21dddd2aa5894f4ef7d9a8d66e42ad7f41a/circuit%20snaps/completely%20filled.jpg">
  <br/><i>overflow</i>
</p>

<p align="justify">
  <h2>Road map</h2>
</p>
<p align="justify">

> ## Arrangements 
> 
>At first, we arranged the whole system for the simulation, connecting all the pins if Arduino with specific pins of ULTRASONIC-HC-SR04 and also to that of the breadboard and leds indirectly.

</p>

<p align="justify">

> ## Working of Code 
> 
>Our next step was to write the code for Arduino so that it works properly and help us to direct the signals given from sensor to the LEDs. 

</p>


<p align="justify">

> ## Accuracy of the model 
> 
>At the end, we checked the accuracy of the model as well as the range of the sensor. 

</p>

<p align="justify">
  <h2>Limitations</h2>
</p>
<p align="justify">
  
- Its accuracy decreases as the scale of the model increases.
- We cannot keep eye if we are far from the site(tank).

</p>

<p align="justify">
  <h2>Future Aspects</h2>
</p>
<p align="justify">
  
- The future aspects or the future goals of this project is to make is to make it IOT based system, to be controlled not only automatically but also through our own systems, like Monitors or even Mobile phones.
- IoT water level monitoring system using the HC-SR04 ultrasonic sensor, Nodemcu esp8266 wifi module, and Blynk application. This project is based on two-way communication, you can monitor the Water level in real-time and you can also control the water pump. The lamp indicator represents the water pump.
</p>


<p align="justify">
  <h2>Team members</h2>
</p>
<p align="justify">

1. [Dev srivastava](https://github.com/devsri01)
2. [Mritunjay Kumar Choubey](https://github.com/Ch0ubey)


</p>  


