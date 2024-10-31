% Access the time and data fields
time = data.data{2}.Values.Time;  % Time field
dataValues = data.data{2}.Values.Data;  % Data field

% Plot the time series
figure;
plot(time, dataValues);
title('Time Series Data from data.data{2}.Values');
xlabel('Time (s)');
ylabel('Data Value');
grid on;