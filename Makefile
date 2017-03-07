.PHONY: clean All

All:
	@echo "----------Building project:[ Session_2017 - Debug ]----------"
	@cd "OOP\Session_2017" && "$(MAKE)" -f  "Session_2017.mk"
clean:
	@echo "----------Cleaning project:[ Session_2017 - Debug ]----------"
	@cd "OOP\Session_2017" && "$(MAKE)" -f  "Session_2017.mk" clean
