ax_1 = subplot(2,2,1);
ax_2 = subplot(2,2,2);
ax_3 = subplot(2,2,3);
ax_4 = subplot(2,2,4);

ax = [ax_1;ax_2;ax_3;ax_4];

hold(ax(1),"on");
plot(ax(1), 0:0.5:3.5,rms_Magnetic_1, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'b');
plot(ax(1), 3.5:0.5:7,flip(rms_Magnetic_3), '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'r');
plot(ax(1), 0:0.5:3.5,rms_Magnetic_2, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'c');
plot(ax(1), 3.5:0.5:7,flip(rms_Magnetic_4), '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'm');
grid(ax(1), 'on');
title(ax(1),'Distance vs Voltage', 'FontSize', 14);
ylabel(ax(1),'Voltage (V)', 'FontSize', 12);
xlabel(ax(1),"Distance (cm)", 'FontSize', 12);
legend(ax(1),'North without Shield','South without Shield', 'North with Shield', ...
    'South with Shield', "Location", "southeast");
hold(ax(1),"off");

hold(ax(2),"on");
plot(ax(2), 0:0.5:3.5,B_Magnetic_1, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'b');
plot(ax(2), 3.5:0.5:7,flip(B_Magnetic_3), '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'r');
plot(ax(2), 0:0.5:3.5,B_Magnetic_2, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'c');
plot(ax(2), 3.5:0.5:7,flip(B_Magnetic_4), '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'm');
grid(ax(2), 'on');
title(ax(2),'Distance vs Magnetic Flux Density', 'FontSize', 14);
ylabel(ax(2),'Magnetic Flux Density (T)', 'FontSize', 12);
xlabel(ax(2),"Distance (cm)", 'FontSize', 12);
legend(ax(2),'North without Shield','South without Shield', 'North with Shield', ...
    'South with Shield', "Location", "southeast");
hold(ax(2),"off");

hold(ax(3),"on");
plot(ax(3), B_Magnetic_1,rms_Magnetic_1, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'b');
plot(ax(3), B_Magnetic_3,rms_Magnetic_3, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'r');
grid(ax(3), 'on');
title(ax(3),'Magnetic without Shiled', 'FontSize', 14);
ylabel(ax(3),'Voltage (V)', 'FontSize', 12);
xlabel(ax(3), 'Magnetic Flux Density (T)', 'FontSize', 12);
legend(ax(3),'North','South', 'Location', 'southeast');
hold(ax(3),"off");

hold(ax(4),"on");
plot(ax(4), B_Magnetic_2,rms_Magnetic_2, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'c');
plot(ax(4), B_Magnetic_4,rms_Magnetic_4, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'm');
grid(ax(4), 'on');
title(ax(4),'Magnetic with Shield', 'FontSize', 14);
ylabel(ax(4),'Voltage (V)', 'FontSize', 12);
xlabel(ax(4), 'Magnetic Flux Density (T)', 'FontSize', 12);
legend(ax(4),'North','South', 'Location', 'southeast');
hold(ax(4),"off");

