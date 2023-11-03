% while true
%     prompt = "Give me some? ";
%     x = input(prompt,"s")
%     if x == "stop"
%          break
%     end
% end
%y = x*10
mdl = "pmic_simulink";

current_output = 0;
matlab.engine.shareEngine('RLengine');
