

https://user-images.githubusercontent.com/123604180/216710212-d71a583f-40a8-4f50-bb30-d5f7cbd23065.mp4

# m5paper-100-chess-tests
  Development of the program "One Hundred Chess Tests" with a detailed explanation and comments.
  
![Steps](https://user-images.githubusercontent.com/123604180/217363430-d6660259-6777-448d-9b31-ffca497992f0.png)

  I propose to get acquainted with examples of programming this device
having developed a not very complicated program with a detailed explanation and
comments.

![Chess_test1](https://user-images.githubusercontent.com/123604180/215561834-b665babd-4bc5-4c52-ac05-12b1b60a2625.png)

  We have one hundred chess positions, one of which is on the screen of the device.
By pressing the up button we will see the previous position, by pressing the down
button we will see next position.

  If we press the button inside the device, then a demonstration will occur on the screen
correct decision. Pressing inward again will return the position to its original position
condition.

  If we do not plan to use the device now, then we need to transfer it
sleep mode - power saving mode. To do this, look at the solution of the position
and press the up button. the device will report the remaining energy in miles volts and
that it has gone into sleep mode.

![Chess_test3](https://user-images.githubusercontent.com/123604180/215562811-cad6c16e-82f6-4ea2-a36b-5a48af777c17.png)

  Now the device does not respond to simple button presses and does not consume energy.
To wake up the device, press the button inward and hold for 5-7 seconds.

![Steps1](https://user-images.githubusercontent.com/123604180/216712285-1276b2e2-5c8a-470b-8312-e1b1548cb60c.png)

smesh_d - Offset from the top of the screen.

![Step1](https://user-images.githubusercontent.com/123604180/216608160-eb4640d3-11b6-44ef-9273-915effe656e3.png)

  width 540 pixel
  
  cell 540/8 = 67.5 = 67 (4 pixels remainder)
  
  2+67+67+67+67+67+67+67+67+2 = 540
  
  Draw in squares of 4 fields
  
  ![Step1a](https://user-images.githubusercontent.com/123604180/216630382-95083958-eb98-49d0-a49c-ec664f695169.png)

![Steps2](https://user-images.githubusercontent.com/123604180/216787825-f63eb3df-9759-453e-a252-533be7b8a9a1.png)
![Steps2a](https://user-images.githubusercontent.com/123604180/217105496-3acc2437-8d09-4283-8c8d-0a6352a8b08b.png)


![Step2](https://user-images.githubusercontent.com/123604180/216787816-8c9012dc-f10d-474e-9c4b-2457b26e6f90.png)

![Steps2b](https://user-images.githubusercontent.com/123604180/216790927-e1fbf246-5771-47e1-8e2e-655f25f97051.png)
![Steps2c](https://user-images.githubusercontent.com/123604180/216791343-cc8075d4-8acf-4025-9639-b1bffa79e026.png)
![Steps2d](https://user-images.githubusercontent.com/123604180/216792654-94bc0b26-d9f0-4fce-a222-5d8a67edf403.png)

![Steps3](https://user-images.githubusercontent.com/123604180/216845191-2a6ce4c9-c0d5-4c0c-a683-b78f5b771ce5.png)

Wbat1   - battery charge                  Wbat1 = M5.getBatteryVoltage();

u_pozic - Pointer to current position.
When turned on, a random position is set depending on the battery charge.
In the range (0..63)+20 = 20..83

u_pozic = ((Wbat1>>1)&0x003f)+20;

u_menu - Current state  (0-position,1-animation) 

![Steps4](https://user-images.githubusercontent.com/123604180/217103790-c517d920-5295-4d76-97a9-b1a1af0abda6.png)

![Step4](https://user-images.githubusercontent.com/123604180/217103834-6cc0018d-6677-476a-b0a9-1808db24b682.png)

![Steps4a](https://user-images.githubusercontent.com/123604180/217103886-3cdbeecd-2a37-4cfb-aaa5-b3f6b55c4851.png)

![Steps4b](https://user-images.githubusercontent.com/123604180/217103914-1a01ed51-e897-47bc-aa5a-ca400eca9bf4.png)

![Steps5](https://user-images.githubusercontent.com/123604180/217348706-493c2c69-bf91-440d-becb-a75d9b5f31af.png)

![Steps5a](https://user-images.githubusercontent.com/123604180/217348750-73180255-c229-4ed7-b33e-9c1ac05bee00.png)

