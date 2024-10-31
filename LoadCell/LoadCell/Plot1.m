rms_LoadCell = [rms_LoadCell_0 rms_LoadCell_1 rms_LoadCell_2 rms_LoadCell_3 ...
    rms_LoadCell_4 rms_LoadCell_5 rms_LoadCell_6 rms_LoadCell_7 rms_LoadCell_8 ...
    rms_LoadCell_9 rms_LoadCell_10];

exact_v = [0 2.5];
exact_kg = [0 10];

hold('on')
plot(0:1:10, rms_LoadCell, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'b');
plot(exact_kg, exact_v, 'LineWidth', 1, 'Color', 'r');
grid('on');
title('Load vs Voltage', 'FontSize', 18);
ylabel('Voltage (V)', 'FontSize', 14);
xlabel('Load (kg)', 'FontSize', 14);
legend('rmsLoadCell', 'Exact', 'Location','southeast', 'FontSize', 14)
hold('off')

