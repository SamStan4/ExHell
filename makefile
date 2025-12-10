DIST_DIR             := dist
BUILD_DIR            := build
EXHELL_BIN_NAME      := ExHell
EXHELL_TEST_BIN_NAME := ExHell_tests

.PHONY: \
	clean \
	build \
	test  \
	run   \

clean:
	@if [ -d ${BUILD_DIR} ]; then rm -rf ${BUILD_DIR}; fi;
	@if [ -d ${DIST_DIR}  ]; then rm -rf ${DIST_DIR};  fi;

build:
	mkdir -p ${BUILD_DIR}
	mkdir -p ${DIST_DIR}
	( cd ${BUILD_DIR} && cmake .. && make )
	cp "${BUILD_DIR}/${EXHELL_BIN_NAME}"      "${DIST_DIR}/${EXHELL_BIN_NAME}"
	cp "${BUILD_DIR}/${EXHELL_TEST_BIN_NAME}" "${DIST_DIR}/${EXHELL_TEST_BIN_NAME}"

test:
	@if [ -d ${BUILD_DIR} ]; then \
		"${DIST_DIR}/${EXHELL_TEST_BIN_NAME}"; \
	else \
		echo "build ExHell first. Run: make build" && exit 1; \
	fi;

run:
	@if [ -d ${BUILD_DIR} ]; then \
		"${DIST_DIR}/${EXHELL_BIN_NAME}"; \
	else \
		echo "build ExHell first. Run: make build" && exit 1; \
	fi;