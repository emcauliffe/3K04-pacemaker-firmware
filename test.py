import serial, struct

def sendData():
    path = serial.Serial('COM3', 115200)
    mode = 4
    Lower_Rate_Limit = 60
    Upper_Rate_Limit = 0x02
    Maximum_Sensor_Rate = 120
    Fixed_AV_Delay = 150
    Atrial_Amplitude = 4
    Atrial_Pulse_Width = 0.4
    Ventricular_Amplitude = 3
    Ventricular_Pulse_Width =  0.4
    Atrial_Sensitivity =  75
    VRP = 320
    ARP = 250
    PVARP = 0
    Rate_Smoothing = 0
    Ventricular_Sensitivity =  0.4
    Activity_Threshold = 0
    Reaction_Time = 30
    Response_Factor = 8
    Recovery_Time = 5


    toSend  = struct.pack("B", mode)\
            + struct.pack("B", Lower_Rate_Limit)\
            + struct.pack("B", Upper_Rate_Limit)\
            + struct.pack("H", Maximum_Sensor_Rate)\
            + struct.pack("H", Fixed_AV_Delay)\
            + struct.pack("B", Atrial_Amplitude)\
            + struct.pack("d", Atrial_Pulse_Width)\
            + struct.pack("B", Ventricular_Amplitude)\
            + struct.pack("d", Ventricular_Pulse_Width)\
            + struct.pack("d", Atrial_Sensitivity)\
            + struct.pack("H", VRP)\
            + struct.pack("H", ARP)\
            + struct.pack("H", PVARP)\
            + struct.pack("B", Rate_Smoothing)\
            + struct.pack("d", Ventricular_Sensitivity)\
            + struct.pack("B", Activity_Threshold)\
            + struct.pack("B", Reaction_Time)\
            + struct.pack("B", Response_Factor)\
            + struct.pack("B", Recovery_Time)\

    path.write(toSend)
    print(struct.pack("d", Atrial_Pulse_Width))

sendData()