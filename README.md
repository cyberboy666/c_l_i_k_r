# c_l_i_k_r
a [r_e_c_u_r](https://github.com/cyberboy666/r_e_c_u_r) video sampler extension circuit - custom keypad & midi controller

![image](https://user-images.githubusercontent.com/12017938/155051670-fe0eac9f-a5bc-49ee-8b36-d878c3d2a5ef.png)

- this circuit is distributed by __UNDERSCORES__ - _an open video hardware label_ : it is available to purchase - as a pcb, kit or assembled unit - at [underscores.shop](https://underscores.shop/c_l_i_k_r/)
- the schematic for the circuit can be found [here](/hardware/schematic.pdf)
- the pcb gerber files for the lastest version can be found [here](/hardware/gerber_latest.zip)
- consider [donating](https://liberapay.com/underscores/) to the underscores project to help us continue creating for the commons

## description

__NOTE__ : _c_l_i_k_r is an extension circuit for my existing raspberry pi project [r_e_c_u_r](https://github.com/cyberboy666/r_e_c_u_r) - although this circuit will function as a stand alone midi+keypad controller it is mainly intended to be used with r_e_c_u_r_

- 20x tac-switches for discrete control
- 4x knobs + 4x cv inputs for continuous control
- firmware can be configured to send midi messages or keyboard presses

### background

this is an extension circuit that aims to offer an alternative to using cheapo plastic numpads to control recur. when i first designed recur i decided to use [these](https://www.aliexpress.com/item/4000748567192.html) numpads from aliexpress. my main goals at the time were making the project as simple and accessable as possible. however over the last few years many people have had problems using (possible variations?) of these numpads and others. seemingly similar devices run conflicting firmware, different layout of keys on different versions, crashes, gross hacks needed in the code, partial working units, and many more frustrating problems that are impossible for me to debug without owning every differnet device. i am also aware of contributing to the consumption of ecologically and ethically problematic products by endorsing these devices..

alsonow that recur has evolved beyond just a sample-player, having continuous control over parameters (like shaders) is more important than it was before. still one of the best options is to use a korg-nano-kontrol or similar midi controller as this gives many faders to control effects with. however for people who dont have a nanokontrol or want to use it elsewhere in their setup, i have been thinking of a small cheap and simple alterative to using numpads:


## demo video

[video coming soon]

# documentation

this project is fully _open-source hardware_ - all the files required to build it are included in this repo for free. if you have the time and/or skill you can contribute back by collaborating on / testing new designs, improving these docs, making demo videos/other creative content etc. you can also support the project financially by [donating directing](https://liberapay.com/underscores/), or purchasing through the [web shop](https://underscores.shop).

depending on whether you are going fully diy or buying an assembled and tested unit, some of the following guides will be relavent to you. the flow would be:

## ordering parts

<details><summary><b>parts sourcing guide (w/ notes on pcb fabracation )</b> - start here if you are building fully from scatch or have purchased a pcb</summary>

i try to source all the parts i can from either:
- [tayda](https://www.taydaelectronics.com/) ; cheaper for common parts like resistors etc, also good for mechanical parts like switches and buttons
- [mouser](https://www.mouser.de/) ; has lots more options, speciality video ic's, can sometimes cost more (free shipping on orders over 50euros)
- other ; ocationally there will be parts which will need to be sourced elsewhere - usaully either aliexpress, ebay or amazon etc...

take a look at the [full_bom](/hardware/bom/full_bom.csv) for this project to see where i am sourcing each part from

since the only part on this BOM from mouser is the pots it may not be worth doing an order only for these - you could replace these with tayda pots `A-5531 or `A-1850` instead - if you are happy with the shorter shaft length.
  
## import into tayda

- go to the [tayda quick order](https://www.taydaelectronics.com/quick-order/) and in bottom corner choose _add from file_
- select the file [tayda_bom.csv](../hardware/bom/tayda_bom.csv) in the BOM folder (you will have to download it first or clone this repo)
- after importing select _add to cart_
- __NOTE:__ the minimum value for resistors is 10, so you may need to modify these values to add to cart (or if they are already modified here you will need to see the  full_bom for actual part QTY) 

- OPTIONAL: it is a good idea to add some dip-ic sockets and 2.54pin headers/sockets to your tayda order if you dont have them around already
  
## import into mouser

- go to [mouser bom tool](https://nz.mouser.com/Bom/) and click _upload spreadsheet_
- select the file [mouser_bom.csv](../hardware/bom/mouser_bom.csv) in this folder (you will have to download it first or clone this repo), then _upload my spreadsheet_ and _next_
- ensure that __Mouser Part Number__ is selected in the dropdown above the first row, then _next_, _process_
- if everything looks correct can now put _add to basket_

## selecting to omit some parts
  
- you may not want to include the 4x CV inputs in your build. in this case the 4x jacks, 4x resistors and 8x diode can be omitted from build
- you can also omit the 4x pots if you only want to use c_l_i_k_r as a usb-keyboard (for example if you already have a midi controller to use with r_e_c_u_r)
  
# ordering pcbs

you can support this project by buying individual pcbs from the [shop](https://underscores.shop). if you would rather have pcbs fabricated from gerbers directly the file you need is [here](/hardware/gerber_latest.zip) 

- i get my pcbs fabricated from [jlcpcb](https://cart.jlcpcb.com/quote) - 5 is the minumum order per design
- upload the zip file with the `add gerber file` button
- the default settings are mostly fine - set the __PCB Qty__ and __PCB Color__ settings (you can check that the file looks correct with pcb veiwer)
- it may be best to combine orders with other pcbs you want to have fab'd since the shipping can cost more than the items - also orginising group buys is a good way to distribute the extra pcbs /costs 
  
i often use jlcpcb because they are reliable, cheap and give you an option of colours. remember though that the cheapest Chinese fab houses are not always the most ethical or environmently friendly - if you can afford it consider supporting local companies. 

</details>

## assembly guide

<details><summary><b>assembly guide</b> - start here if you have purchased a diy kit</summary>
  

## interactive BOM for build guiding

follow this link to view the [interactive BOM](https://htmlpreview.github.io/?https://github.com/cyberboy666/c_l_i_k_r/blob/main/hardware/bom/ibom.html)

## general solder advices

- remember to heat pad first (2-3seconds), then add solder, then continue to heat (1-2seconds)

- Checkout the web-comic [soldering is easy](https://mightyohm.com/files/soldercomic/FullSolderComic_EN.pdf) for more soldering advice

## general order of assembly

- in general while assembling i start placing resistors and capacitors first. placing 5 - 10 components at a time and then flipping the board to solder them and trim the legs etc.
- next i would do diodes, transistors and ic's - taking care that these are placed in the right direction (using a ic socket can be useful)
- finally i place the interface parts - rca jacks, power jack, pots and switches - make sure these have lots of solder on for structural stablity

## specific assembly advice

- start with the lowest to place components : resistors and diodes, then do the tact buttons

- if you want to be able to remove the pro-micro from the board you will need to solder header sockets to the board – otherwise can directly solder pro-micro header pins

- finally place and solder the pots and jacks.
  
## flashing firmware onto the micro-controller
  
if you have got a kit from the shop the firmware will be pre-configured - still you might want to read this so you can edit the code and update the midi mapping.

[more details coming soon]
  
</details>
  
## operating guide
  
<details><summary><b>operating guide</b> - start here if you have purchased an assembled unit</summary>

![image](https://user-images.githubusercontent.com/12017938/155868459-193cc2f6-f5e4-4707-9569-fd2e47ec18fe.png)
 
By connecting _c_l_i_k_r_ to _r_e_c_u_r_ with a usb cable the pi should auto-detect it as a usb-keyboard – as with any recur controls you will need to connect the keyboard before booting to ensure key mapping is performed on boot.

If `MIDI_INPUT` is set to `usb` under the _r_e_c_u_r_ __user_input__ setting then it should auto-detect it as usb-midi-controller also.

If you wish to instead connect a different midi device while using _c_l_i_k_r_ as a keyboard try the `CYCLE_MIDI_PORT` action in __user_input__ settings

The default mapping outputs `channel0: cc0 – cc3` on the 4 knobs and cv inputs of _c_l_i_k_r_ – this can be customised by editing the _c_l_i_k_r_ firmware. Tact buttons do not send midi by default but this can be enabled also in the firmware

## flashing firmware to micro-controller

[coming soon]
  
</details>

### more info

<details><summary><b>how the circuit works</b></summary>
  
[coming soon]
                                                                                                                             
</details>

<details><summary><b>contributing guide</b></summary>
  
if you would like to contribute back to these projects in some way but dont know how the best thing (for now) would be to reach out to me directly ( tim@cyberboy666.com or @cyberboy666 on scanlines forum) - i will be happy to help
  
</details>


## credits & more info


This circuit is distributed through UNDERSCORES – open video hardware label – visit [underscores.shop](https://underscores.shop) for more info

The pcb was designed using KICAD

Everything from gerbers, cad files, panels and documentation is freely available online and distributed under CC-BY-SA / open-source licenses – help us contribute to the commons !

Ask any questions or start discussions related to this project on the [scanlines.xyz](https://scanlines.xyz) forum – an online community space dedicated to diy av / electronic media art

You can contact me directly at tim (at) cyberboy666 (dot) com 
Please get in touch if you are interested in hosting a workshop !

![image](https://user-images.githubusercontent.com/12017938/155425518-89547b7b-026a-47a5-9c56-976330a4267f.png)


Thanks to all the r_e_c_u_r users who inspire me to better this project! to Bastien Lavaud for circuit advice, always. To Ben Caldwell for project advice. To everyone who has or will contribute ♥♥♥

