% Initialize arrays to store RMS values for Magnetic types
rms_Magnetic_1 = []; 
rms_Magnetic_2 = []; 
rms_Magnetic_3 = []; 
rms_Magnetic_4 = []; 

for Y = 1:4
    for X = 0:7 % Loop through X values from 0 to 7
        % Create variable name for the rms variable in the base workspace
        rmsVarName = sprintf('rms_Magnetic_%d_%d', Y, X);
        
        % Check if the rms variable exists in the workspace
        if evalin('base', sprintf('exist(''%s'', ''var'')', rmsVarName)) == 1
            % Fetch the variable value from the base workspace
            rmsValue = evalin('base', rmsVarName);
            
            % Dynamically assign to the appropriate array based on Y
            eval(sprintf('rms_Magnetic_%d(end + 1) = rmsValue;', Y));
        end
    end
end

% Now rms_Magnetic_1, rms_Magnetic_2, rms_Magnetic_3, and rms_Magnetic_4 contain all available values.
