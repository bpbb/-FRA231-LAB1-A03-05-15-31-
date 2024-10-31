% Initialize a flag to check if any LoadCell_X property exists
fieldExists = false;

% Loop through the possible values for X
for X = 0:1:10
    propertyName = sprintf('LoadCell_%d', X); 
    
    % Check if the property exists in the 'out' object
    if isprop(out, propertyName) 
        fieldExists = true; % Set flag to true if the property is found
        
        % Get the value of the property
        propertyValue = out.(propertyName); 
        
        % Assign the property value to a variable in the base workspace
        assignin('base', propertyName, propertyValue);
        fprintf('Property %s exists and has been recreated in the workspace.\n', propertyName);
    end
end

% If no properties were found, display a message
if ~fieldExists
    disp('No Magnetic_X_Y properties found in the out object.');
end
