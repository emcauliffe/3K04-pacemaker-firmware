import serial, struct

def sendData():
    path = serial.Serial('COM3', 115200)
    mode = 0x05
    Lower_Rate_Limit = 0x01
    Upper_Rate_Limit = 0x02
    Maximum_Sensor_Rate = 0x2233
    Fixed_AV_Delay = 0x1122
    Atrial_Amplitude = 0x03
    Atrial_Pulse_Width = 0x33445566
    Ventricular_Amplitude = 0x04
    Ventricular_Pulse_Width = 0x33445566
    Atrial_Sensitivity = 0x11223344
    VRP = 0x7799
    ARP = 0x6677
    PVARP = 0x1166
    Rate_Smoothing = 0x27
    Ventricular_Sensitivity = 0x11223344
    Activity_Threshold = 0x85
    Reaction_Time = 0x03
    Response_Factor = 0x63
    Recovery_Time = 0x77

    temp = 0xFF5


    toSend  = struct.pack("B", mode)\
            + struct.pack("B", Lower_Rate_Limit)\
            + struct.pack("B", Upper_Rate_Limit)\
            + struct.pack("H", Maximum_Sensor_Rate)\
            + struct.pack("H", Fixed_AV_Delay)\
            + struct.pack("B", Atrial_Amplitude)\
            + struct.pack("I", Atrial_Pulse_Width)\
            + struct.pack("B", Ventricular_Amplitude)\
            + struct.pack("I", Ventricular_Pulse_Width)\
            + struct.pack("I", Atrial_Sensitivity)\
            + struct.pack("H", VRP)\
            + struct.pack("H", ARP)\
            + struct.pack("H", PVARP)\
            + struct.pack("B", Rate_Smoothing)\
            + struct.pack("I", Ventricular_Sensitivity)\
            + struct.pack("B", Activity_Threshold)\
            + struct.pack("B", Reaction_Time)\
            + struct.pack("B", Response_Factor)\
            + struct.pack("B", Recovery_Time)\
    
    path.write(toSend)
    print(toSend)

sendData()