kg = [0 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 1.0 1.1 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 10.0];
mv_loadcell = [0.04 0.08 0.13 0.18 0.22 0.26 0.31 0.36 0.41 0.45 0.49 0.53 0.96 1.36 1.77 2.16 2.54 2.95 3.36 3.77 4.19];

v_ina = [0.056 0.0591 0.0666 0.0772 0.091 0.1076 0.1284 0.1517 0.1767 0.2026 0.2258 0.2522 0.48 0.76 1.02 1.29 1.55 1.82 2.09 2.34 2.52];

kg_ina_zoom = [0 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 1.0 1.1];
v_ina_zoom = [0.056 0.0591 0.0666 0.0772 0.091 0.1076 0.1284 0.1517 0.1767 0.2026 0.2258 0.2522];

ax_1 = subplot(2,2,2);
ax_2 = subplot(2,2,[1 3]);
ax_3 = subplot(2,2,4);

ax = [ax_1;ax_2;ax_3];

plot(ax(1), kg, mv_loadcell, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'b');
grid(ax(1), 'on');
title(ax(1), 'Load VS Voltage from Load Cell', 'FontSize', 14);
ylabel(ax(1),'Voltage (mV)', 'FontSize', 12);
xlabel(ax(1), 'Load (kg)', 'FontSize', 12);

plot(ax(2), kg, v_ina, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'r');
grid(ax(2), 'on');
title(ax(2), 'Load VS Voltage from INA125', 'FontSize', 14);
ylabel(ax(2),'Voltage (V)', 'FontSize', 12);
xlabel(ax(2), 'Load (kg)', 'FontSize', 12);

plot(ax(3), kg_ina_zoom, v_ina_zoom, '-o', 'MarkerSize', 6, 'LineWidth', 2, 'Color', 'r');
grid(ax(3), 'on');
title(ax(3), 'Load VS Voltage from INA125 (Zoom in to below 1.1 kg)', 'FontSize', 14);
ylabel(ax(3),'Voltage (V)', 'FontSize', 12);
xlabel(ax(3), 'Load (kg)', 'FontSize', 12);

