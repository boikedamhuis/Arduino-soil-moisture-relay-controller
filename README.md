# Arduino Soil Moisture relay controller

Arduino example to control a relay based on moisture values. The basis for a smart garden irrigation system.
# Wiring relay

- Connect VCC to 3.3v
- Connect ground to ground
- Connect data pin to AO analog pin.

![alt text](https://hackster.imgix.net/uploads/attachments/342703/image_pMi8PUoeFZ.png?auto=compress%2Cformat&w=1280&h=960&fit=max "Logo Title Text 1")
# Wiring soil moisture sensor

- Connect VCC to 3.3v
- Connect ground to ground
- Connect data pin to pin D4/GPIO2
![alt text](https://www.electronicwings.com/public/images/user_images/images/NodeMCU/NodeMCU%20Interfaces/NodeMCU%20Soil%20Moisture/Soil_Moisture_Interfacing_Diagram.png "Logo Title Text
1")
Wire your pump to the relay. The pump will start pumping water as soon as the soil moisture sensor detects too less water. 

