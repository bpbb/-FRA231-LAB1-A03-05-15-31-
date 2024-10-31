% Loop through the possible values for X and letters
for X = 0:10:100
    for letter = 'A':'C' % Loop through letters A, B, C
        % Check for both Poten_ and LinearPoten_ variables
        for prefix = {'Poten_', 'LinearPoten_'}
            % Create the variable name
            variableName = sprintf('%s%s_%d', prefix{1}, letter, X); 
            
            % Check if the variable exists in the base workspace
            if evalin('base', sprintf('exist(''%s'', ''var'')', variableName))
                % Retrieve the value of the variable
                potenValue = evalin('base', variableName);
                
                % Convert the 16-bit integer to a double
                potenValue = double(potenValue);  % Convert to double
                
                % Calculate the RMS value for a 1x100 matrix
                rmsValue = sqrt(mean(potenValue.^2)); % potenValue is now a 1x100 matrix of double
                
                % Create the RMS variable name
                rmsVarName = sprintf('rms_%s', variableName); 
                
                % Assign the RMS value as a double to the variable in the workspace
                assignin('base', rmsVarName, rmsValue);
                fprintf('RMS of %s is %.2f and has been created as %s in the workspace.\n', variableName, rmsValue, rmsVarName);
            else
                fprintf('The variable %s does not exist in the workspace.\n', variableName);
            end
        end
    end
end



