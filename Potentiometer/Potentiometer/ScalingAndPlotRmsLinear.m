% Define which array you are working with
letter = 'B';  % Can be 'A', 'B'

% Check the letter and select the corresponding array
switch letter
    case 'A'
        rms_Poten = rms_LinearPoten_A;
    case 'B'
        rms_Poten = rms_LinearPoten_B;
    otherwise
        error('Invalid letter. Use A, B, or C.');
end

% Perform scaling
Scailing_Poten = (rms_Poten / 3.256) * 100;

switch letter
    case 'A'
        Exact = Exact_LPA;
    case 'B'
        Exact = Exact_LPB;
end

% Calculate 20% error for the exact data
error = 0.2 * Exact;

% Plotting the exact data with 20% error bars
figure;
e = errorbar(0:10:100, Exact, error, '-o', ...
    'LineWidth', 1, 'MarkerSize', 6, 'CapSize', 10);
e.Color = [0.2, 0.2, 0.2, 0.2]; 

% Hold for plotting other values
hold("on");

plot(0:10:100, Scailing_Poten, '-o', 'LineWidth', 2, 'MarkerSize', 6, 'Color', 'b');
plot(0:10:100, Exact, '-o', 'LineWidth', 2, 'MarkerSize', 6, 'Color', 'r');

switch letter
    case 'A'
        title(['Audio Taper'], 'FontSize', 18);
    case 'B'
        title(['Linear Taper'], 'FontSize', 18);
end

ylabel('Voltage (%)', 'FontSize', 14);
xlabel('Rotational Travel (%)', 'FontSize', 14);
grid("on");

% Set axes limits and ticks
xlim([0 100]);
ylim([0 100]);
xticks(0:10:100);
yticks(0:10:100);

% Add legend
legend('Error Bars (20%)', 'Output Voltage', 'Datasheet', ...
    'Location', 'Best', 'FontSize', 14);