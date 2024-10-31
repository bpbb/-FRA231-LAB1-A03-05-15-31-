% Initialize a flag to check if any Magnetic_Y_X property exists
fieldExists = false;

% Loop through the possible values for X
for X = 0:1:7
    for Y = 1:4  % Loop through the possible values for Y
        propertyName = sprintf('Magnetic_%d_%d', Y, X); 
        
        if isprop(out, propertyName)  % Check if the property exists in the 'out' object
            fieldExists = true; % Set flag to true if the property is found
            
            % Get the value of the property
            propertyValue = out.(propertyName); 
            
            % Assign the property value to a variable in the base workspace
            assignin('base', propertyName, propertyValue);
            fprintf('Property %s exists and has been recreated in the workspace.\n', propertyName);
        end
    end
end

% If no properties were found, display a message
if ~fieldExists
    disp('No Magnetic_X_Y properties found in the out object.');
end


% 1 = North down to sensor
% 2 = North down with shield
% 3 = South down to sensor
% 4 = South down with shield