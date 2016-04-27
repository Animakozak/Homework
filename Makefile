.PHONY: clean All

All:
	@echo "----------Building project:[ Array_Insane_Session - Debug ]----------"
	@cd "Array_Insane_Session" && "$(MAKE)" -f  "Array_Insane_Session.mk"
clean:
	@echo "----------Cleaning project:[ Array_Insane_Session - Debug ]----------"
	@cd "Array_Insane_Session" && "$(MAKE)" -f  "Array_Insane_Session.mk" clean
