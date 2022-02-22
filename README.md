# c_l_i_k_r
a r_e_c_u_r video sampler extension circuit - custom keypad/midi controller

![image](https://user-images.githubusercontent.com/12017938/155051670-fe0eac9f-a5bc-49ee-8b36-d878c3d2a5ef.png)

### motivation

this is a lil circuit that aims to offer a low-cost alternative to using cheapo plastic numpads to control recur. when i first designed recur i decided to use [these](https://www.aliexpress.com/item/4000748567192.html) numpads from aliexpress. my main goals at the time were making the project as simple and accessable as possible. however over the last few years many people have had problems using (possible variations?) of these numpads and others. seemingly similar devices run conflicting firmware, different layout of keys on different versions, crashes, gross hacks needed in the code, partial working units, and many more frustrating problems that are impossible for me to debug without owning every differnet device. i am also aware of contributing to the consumption of ecologically and ethically problematic products by endorsing these devices..

alsonow that recur has evolved beyond just a sample-player, having continuous control over parameters (like shaders) is more important than it was before. still one of the best options is to use a korg-nano-kontrol or similar midi controller as this gives many faders to control effects with. however for people who dont have a nanokontrol or want to use it elsewhere in their setup, i have been thinking of a small cheap and simple alterative to using numpads:

![image](https://user-images.githubusercontent.com/12017938/96725839-a4cd7700-13b1-11eb-83d5-a9e582766bee.png)

- 20x tac-switches for discrete control
- (optional) 4x pot + 4x cv for continuous control
- firmware can be set to act as midi device (required for cc ) or keyboard device
- shouldnt come to much more than 10€ cost in parts (ofcourse more for kits/assembled if i ever get round to this)
