ds_B = [-0.06 -0.055 -0.05 -0.044 0.044 0.05 0.055 0.06];
ds_V = [0 0.02 0.1 0.2 3.1 3.2 3.28 3.3];

hold("on");
plot(ds_B,ds_V, 'LineWidth', 2, 'Color', 'g');
plot(B_Magnetic_1,rms_Magnetic_1, 'LineWidth', 2, 'Color', 'b');
plot(B_Magnetic_3,rms_Magnetic_3, 'LineWidth', 2, 'Color', 'r');
grid('on');
title('Magnetic Flux Density vs Voltage', 'FontSize', 18);
ylabel('Voltage (V)', 'FontSize', 14);
xlabel('Magnetic Flux Density (T)', 'FontSize', 14);
legend('Datasheet', 'North','South', 'Location', 'southeast', 'FontSize', 14);
hold("off");

