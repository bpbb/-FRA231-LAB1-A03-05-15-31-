% Initialize arrays to store RMS values for Poten and LinearPoten
rms_Poten_A = []; 
rms_Poten_B = []; 
rms_Poten_C = []; 
rms_LinearPoten_A = []; 
rms_LinearPoten_B = []; 

% Loop through the possible values for X and letters
for X = 0:10:100
    for letter = 'A':'C' % Loop through letters A, B, C
        % Check for both Poten_ and LinearPoten_ variables
        for prefix = {'Poten_', 'LinearPoten_'}
            % Create the variable name
            rmsVarName = sprintf('rms_%s%s_%d', prefix{1}, letter, X);
            
            % Check if the rms variable exists in the workspace
            if evalin('base', sprintf('exist(''%s'', ''var'')', rmsVarName)) == 1
                % Store the value in the corresponding rms array based on the letter
                switch prefix{1}
                    case 'Poten_'
                        switch letter
                            case 'A'
                                rms_Poten_A(end + 1) = evalin('base', rmsVarName);  % Append the value
                            case 'B'
                                rms_Poten_B(end + 1) = evalin('base', rmsVarName);  % Append the value
                            case 'C'
                                rms_Poten_C(end + 1) = evalin('base', rmsVarName);  % Append the value
                        end
                    case 'LinearPoten_'
                        switch letter
                            case 'A'
                                rms_LinearPoten_A(end + 1) = evalin('base', rmsVarName);  % Append the value
                            case 'B'
                                rms_LinearPoten_B(end + 1) = evalin('base', rmsVarName);  % Append the value
                        end
                end
            end
        end
    end
end

% rms_Poten_A, rms_Poten_B, rms_Poten_C, rms_LinearPoten_A, rms_LinearPoten_B, rms_LinearPoten_C contain all available values.