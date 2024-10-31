% Loop through the possible values for X
for X = 0:1:10
    variableName = sprintf('LoadCell_%d', X); 
    
    % Check if the variable exists in the base workspace
    if evalin('base', sprintf('exist(''%s'', ''var'')', variableName))
        % Retrieve the value of the variable
        LoadCellValue = evalin('base', variableName);
        
        % Convert the 16-bit integer to a double
        LoadCellValue = double(LoadCellValue);  % Convert to double
        
        % Calculate the RMS value for a 1x600 matrix
        rmsValue = sqrt(mean(LoadCellValue.^2)); % magneticValue is now a 1x600 matrix of double
        
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
