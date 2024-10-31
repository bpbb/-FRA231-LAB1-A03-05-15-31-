rms_LoadCell = [rms_LoadCell_0 rms_LoadCell_1 rms_LoadCell_2 rms_LoadCell_3 ...
    rms_LoadCell_4 rms_LoadCell_5 rms_LoadCell_6 rms_LoadCell_7 rms_LoadCell_8 ...
    rms_LoadCell_9 rms_LoadCell_10];

rms_LoadCell_KG = [rms_LoadCell_KG_0 rms_LoadCell_KG_1 rms_LoadCell_KG_2 rms_LoadCell_KG_3 ...
    rms_LoadCell_KG_4 rms_LoadCell_KG_5 rms_LoadCell_KG_6 rms_LoadCell_KG_7 rms_LoadCell_KG_8 ...
    rms_LoadCell_KG_9 rms_LoadCell_KG_10];

exact_v = [0 2.5];
exact_kg = [0 10];

hold('on')
plot(rms_LoadCell, rms_LoadCell_KG, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'b');
plot(exact_v, exact_kg, 'LineWidth', 1, 'Color', 'r');
grid('on');
title('Voltage vs Mass after Calibration', 'FontSize', 18);
ylabel('Mass (kg)', 'FontSize', 14);
xlabel('Voltage (V)', 'FontSize', 14);
legend('rmsLoadCell', 'Exact', 'Location','southeast', 'FontSize', 14)
hold('off')

