% Initialize a flag to check if any Poten_X_Y or LinearPoten_X_Y property exists
fieldExists = false;

% Loop through the possible values for X
for X = 0:10:100
    for letter = 'A':'C' % Loop through letters A, B, C
        % Check for both Poten_ and LinearPoten_ properties
        for prefix = {'Poten_', 'LinearPoten_'}
            propertyName = sprintf('%s%s_%d', prefix{1}, letter, X); % Create the property name
            
            if isprop(out, propertyName) % Check if the property exists in the out object
                fieldExists = true; % Set flag to true if the property is found
                
                % Get the value of the property
                propertyValue = out.(propertyName); 
                
                % Assign the property value to a variable in the workspace
                assignin('base', propertyName, propertyValue);
                fprintf('Property %s exists and has been recreated in the workspace.\n', propertyName);
            end
        end
    end
end

if ~fieldExists
    disp('No Poten_X_Y or LinearPoten_X_Y properties found in the out object.');
end

