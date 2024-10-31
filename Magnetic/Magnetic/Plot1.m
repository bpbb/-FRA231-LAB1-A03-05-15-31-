ax_1 = subplot(2,2,1);
ax_2 = subplot(2,2,2);
ax_3 = subplot(2,2,3);
ax_4 = subplot(2,2,4);

ax = [ax_1;ax_2;ax_3;ax_4];

hold(ax(1),"on");
plot(ax(1), 0:0.5:3.5,rms_Magnetic_1, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'b');
grid(ax(1), 'on');
title(ax(1), 'North Pole without Shield', 'FontSize', 14);
ylabel(ax(1),'Voltage (V)', 'FontSize', 12);
xlabel(ax(1),"Distance (cm)", 'FontSize', 12);
hold(ax(1),"off");

hold(ax(2),"on");
plot(ax(2), 0:0.5:3.5,rms_Magnetic_2, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'r');
grid(ax(2), 'on');
title(ax(2),'North Pole with Shield', 'FontSize', 14);
ylabel(ax(2),'Voltage (V)', 'FontSize', 12);
xlabel(ax(2),"Distance (cm)", 'FontSize', 12);
hold(ax(2),"off");

hold(ax(3),"on");
plot(ax(3), 0:0.5:3.5,rms_Magnetic_3, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'c');
grid(ax(3), 'on');
title(ax(3),'South Pole without Shield', 'FontSize', 14);
ylabel(ax(3),'Voltage (V)', 'FontSize', 12);
xlabel(ax(3),"Distance (cm)", 'FontSize', 12);
hold(ax(3),"off");

hold(ax(4),"on");
plot(ax(4), 0:0.5:3.5,rms_Magnetic_4, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'm');
grid(ax(4), 'on');
title(ax(4),'South Pole with Shield', 'FontSize', 14);
ylabel(ax(4),'Voltage (V)', 'FontSize', 12);
xlabel(ax(4),"Distance (cm)", 'FontSize', 12);
hold(ax(4),"off");

