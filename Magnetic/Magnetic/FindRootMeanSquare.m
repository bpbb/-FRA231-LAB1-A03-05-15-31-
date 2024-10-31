% Loop through the possible values for X
for X = 0:1:7
    for Y = 1:4 % Loop through the possible values for 
        variableName = sprintf('Magnetic_%d_%d', Y, X); 
        
        % Check if the variable exists in the base workspace
        if evalin('base', sprintf('exist(''%s'', ''var'')', variableName))
            % Retrieve the value of the variable
            magneticValue = evalin('base', variableName);
            
            % Convert the 16-bit integer to a double
            magneticValue = double(magneticValue);  % Convert to double
            
            % Calculate the RMS value for a 1x600 matrix
            rmsValue = sqrt(mean(magneticValue.^2)); % magneticValue is now a 1x600 matrix of double
            
            % Create the RMS variable name
            rmsVarName = sprintf('rms_%s', variableName); 
            
            % Assign the RMS value as a double to the variable in the workspace
            assignin('base', rmsVarName, rmsValue);
            fprintf('RMS of %s is %.2f and has been created as %s in the workspace.\n', ...
                    variableName, rmsValue, rmsVarName);
        else
            fprintf('The variable %s does not exist in the workspace.\n', variableName);
        end
    end
end
