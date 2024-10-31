Vq = 3.3/2;
Sensitivity = 30;
Stc = 0.0012;
Ta = 25;
Vout_1 = rms_Magnetic_1;
Vout_2 = rms_Magnetic_2;
Vout_3 = rms_Magnetic_3;
Vout_4 = rms_Magnetic_4;

B_Magnetic_1 = (Vout_1-Vq)/(Sensitivity * (1 + (Stc*(Ta-25))));
B_Magnetic_2 = (Vout_2-Vq)/(Sensitivity * (1 + (Stc*(Ta-25))));
B_Magnetic_3 = (Vout_3-Vq)/(Sensitivity * (1 + (Stc*(Ta-25))));
B_Magnetic_4 = (Vout_4-Vq)/(Sensitivity * (1 + (Stc*(Ta-25))));

